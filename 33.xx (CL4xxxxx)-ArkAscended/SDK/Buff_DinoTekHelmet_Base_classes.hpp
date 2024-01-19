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
	uint8                                        Pad_4A08[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB70(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         bHelmetActivated;                                  // 0xB78(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4A09[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UAnimMontage*                          ActivatedMontage;                                  // 0xB80(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class UAnimMontage*                          DeactivatedMontage;                                // 0xB88(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       LastActivatedHelmetTime;                           // 0xB90(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         bNextSide;                                         // 0xB98(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4A0A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       LastAttackTime;                                    // 0xBA0(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, InstancedReference, SubobjectReference)
	class UClass*                                ProjectileClass;                                   // 0xBA8(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	double                                       ActivatedTPVZMult;                                 // 0xBB0(0x8)(ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       ActivatedFPVZMult;                                 // 0xBB8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class UAnimMontage*                          ShootAnimLeft;                                     // 0xBC0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	class UAnimMontage*                          ShootAnimRight;                                    // 0xBC8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         bIsTargetingModeEnabled;                           // 0xBD0(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4A0B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       SocketClampDelta;                                  // 0xBD8(0x8)(BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       MinAttackInterval;                                 // 0xBE0(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       LastHelmetActivatedTime;                           // 0xBE8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       HelmetActivatedAttackInterval;                     // 0xBF0(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference)
	int32                                        ElementDecreasePerShot;                            // 0xBF8(0x4)(Edit, ConstParm, Net, Parm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4A0C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TSoftClassPtr<class AShooterWeapon>          DisabledInVolumePreventWeaponClass;                // 0xC00(0x30)(BlueprintVisible, ExportObject, Net, EditFixedSize, Transient, DisableEditOnInstance, SubobjectReference)
	class UClass*                                SaddleItemClass;                                   // 0xC30(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       DurabilitycostPerShot;                             // 0xC38(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class ABuff_DinoTekHelmet_Base_C* GetDefaultObj();

	float IsElectricalStormActive(bool Return, class UWorld* CallFunc_K2_GetWorld_ReturnValue, TScriptInterface<class IScorchedEarthDayCycle_Interface_C>* K2Node_DynamicCast_AsScorched_Earth_Day_Cycle_Interface, TScriptInterface<class IScorchedEarthDayCycle_Interface_C>* K2Node_DynamicCast_AsScorched_Earth_Day_Cycle_Interface_1, class AActor* CallFunc_Array_Get_Item, bool* CallFunc_DoesImplementInterface_ReturnValue);
	void GetSocketClampDelta(double* OutSocketClampDelta);
	bool BPSetupForInstigator(class AActor** ForInstigator, bool CallFunc_BooleanAND_ReturnValue);
	float BPDrawBuffStatusHUD(class AShooterHUD** HUD, float* XPos, float* YPos, float* ScaleMult, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, double* CallFunc_Divide_DoubleDouble_B_ImplicitCast);
	int32 IsAllowedToFire(const struct FVector& ServerSpawnAtLoc, bool* RetVal, class USkeletalMeshComponent** K2Node_DynamicCast_AsSkeletal_Mesh_Component, struct FVector* CallFunc_BreakTransform_Scale, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, struct FVector* CallFunc_BreakTransform_Scale_1, class UWorld* CallFunc_K2_GetWorld_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	bool HideBuffFromHUD(bool ReturnValue);
	bool SetTargeting(bool CallFunc_BooleanAND_ReturnValue);
	struct FVector BuffTickClient(bool Temp_bool_Variable, bool Temp_bool_Variable_1, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& K2Node_Select_Default, const struct FVector& K2Node_Select_Default_1, const struct FVector& CallFunc_VInterpTo_Constant_ReturnValue, const struct FVector& CallFunc_VInterpTo_Constant_ReturnValue_1, float CallFunc_VInterpTo_Constant_InterpSpeed_ImplicitCast);
	bool LocalDoAttack(bool Temp_bool_Variable, bool Temp_bool_Variable_1, class FName CallFunc_MakeLiteralName_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, class FName K2Node_Select_Default, class UWorld* CallFunc_K2_GetWorld_ReturnValue, const TArray<class AActor*>& K2Node_MakeArray_Array, class APlayerController** CallFunc_GetOwnerController_ReturnValue, class USkeletalMeshComponent** K2Node_DynamicCast_AsSkeletal_Mesh_Component, struct FVector* CallFunc_Conv_RotatorToVector_ReturnValue, struct FVector* CallFunc_BreakTransform_Scale, struct FVector* CallFunc_GetCameraLocation_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float* CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial** CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, struct FVector* CallFunc_BreakHitResult_TraceStart, struct FVector* CallFunc_BreakHitResult_TraceEnd, const struct FVector& K2Node_Select_Default_1);
	float PlayItemAnim(class USkeletalMeshComponent** K2Node_DynamicCast_AsSkeletal_Mesh_Component);
	bool GetTekSaddleItem(class UPrimalItem* TekSaddleItem, class UPrimalItem** RetVal, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Array_Length_ReturnValue, class UPrimalItem* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void ActivateHelmet();
	void DeactivateHelmet();
	void PressedAltFire();
	void DoServerActivateHelmet();
	void DoServerDeactivateHelmet();
	struct FVector ServerDoAttack(const struct FVector& ServerSpawnAtLoc);
	bool DoAttack(const struct FVector& ServerSpawnAtLoc);
	void CheckForItem();
	float ExecuteUbergraph_Buff_DinoTekHelmet_Base(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class UWorld* CallFunc_K2_GetWorld_ReturnValue, struct FVector* K2Node_CustomEvent_AimAtLoc_1, struct FVector* K2Node_CustomEvent_ServerSpawnAtLoc_1, struct FVector* K2Node_CustomEvent_AimAtLoc, bool* K2Node_CustomEvent_bLeftSide, struct FVector* K2Node_CustomEvent_ServerSpawnAtLoc, class FName K2Node_Select_Default, class USkeletalMeshComponent** K2Node_DynamicCast_AsSkeletal_Mesh_Component, struct FVector* CallFunc_BreakTransform_Scale, float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw, struct FVector* CallFunc_Conv_RotatorToVector_ReturnValue, class AActor* CallFunc_SpawnActorDeferred_ReturnValue, class AShooterProjectile** K2Node_DynamicCast_AsShooter_Projectile, const struct FVector& CallFunc_Normal_ReturnValue, struct FRotator* CallFunc_Conv_VectorToRotator_ReturnValue, class UAnimMontage* K2Node_Select_Default_1, float* CallFunc_BreakRotator_Roll_1, float* CallFunc_BreakRotator_Pitch_1, float* CallFunc_BreakRotator_Yaw_1, bool CallFunc_BooleanAND_ReturnValue, class UClass** CallFunc_GetObjectClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class UClass** K2Node_ClassDynamicCast_AsPrimal_Item, class UPrimalItemArmor_SaddleGeneric_Tek_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, class AController** CallFunc_GetController_ReturnValue, bool* CallFunc_CanElementDecrease_CanDecrease, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool CallFunc_IsShipping_ReturnValue, bool* CallFunc_BooleanOR_ReturnValue, class UClass** CallFunc_GetObjectClass_ReturnValue_1, struct FVector* CallFunc_Conv_RotatorToVector_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2);
};

}


