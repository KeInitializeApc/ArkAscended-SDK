#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x27 (0xF70 - 0xF49)
// BlueprintGeneratedClass PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C
class UPrimalItemArmor_ShieldTek_C : public UPrimalItemArmor_Base_Tek_C
{
public:
	uint8                                        Pad_58D9[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       DurabilityCostPerReflection;                       // 0xF50(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UClass*                                MjolnirProjectileClass;                            // 0xF58(0x8)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class FString                                MjolnirProjectileSoftRef;                          // 0xF60(0x10)(EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItemArmor_ShieldTek_C* GetDefaultObj();

	bool BPClientHandleItemNetExecCommand(class FName* CommandName, struct FBPNetExecParams* ExecParams, class AShooterPlayerController** ForPC);
	bool PlayHitShieldEffect(bool Temp_bool_Variable, struct FBPNetExecParams* K2Node_MakeStruct_BPNetExecParams, class AActor* CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_IsFirstPerson_ReturnValue, class USceneComponent* K2Node_Select_Default);
	bool BPConsumeProjectileImpact(struct FHitResult* HitResult, const struct FVector& NewVelocity, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue_1, struct FVector* CallFunc_Conv_RotatorToVector_ReturnValue, bool CallFunc_Can_Element_Decrease_CanDecrease, class AActor* CallFunc_GetOwner_ReturnValue, TArray<class AActor*>* K2Node_MakeArray_Array, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Normal_ReturnValue_2, float* CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast);
	bool BPAddedAttachments(bool* CallFunc_NotEqual_StrStr_ReturnValue);
	bool RefreshAmmoMaterial(bool* CallFunc_Greater_IntInt_ReturnValue, bool* K2Node_DynamicCast_bSuccess, double CallFunc_SelectFloat_ReturnValue, class UMaterialInterface** CallFunc_GetMaterial_ReturnValue, struct FLinearColor* K2Node_MakeStruct_LinearColor, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool* K2Node_DynamicCast_bSuccess_1, struct FLinearColor* K2Node_MakeStruct_LinearColor_1, bool* K2Node_DynamicCast_bSuccess_2, class UMaterialInterface** CallFunc_GetMaterial_ReturnValue_1, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic_1, bool* K2Node_DynamicCast_bSuccess_3, float* K2Node_MakeStruct_A_ImplicitCast, float* K2Node_MakeStruct_A_ImplicitCast_1);
	void ClientUpdatedWeaponClipAmmo();
	float HandleShieldDamageBlocking(struct FDamageEvent* DamageEvent, class AController** EventInstigator, class AActor* DamageCauser, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool* K2Node_DynamicCast_bSuccess_1, class UObject** CallFunc_GetClassDefaultObject_ReturnValue, bool* K2Node_DynamicCast_bSuccess_2, bool CallFunc_NotEqual_ClassClass_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, TArray<class AActor*>* K2Node_MakeArray_Array, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, struct FVector* CallFunc_GreaterGreater_VectorRotator_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool* CallFunc_BreakHitResult_bInitialOverlap, float* CallFunc_BreakHitResult_Distance, struct FVector* CallFunc_BreakHitResult_Location, struct FVector* CallFunc_BreakHitResult_ImpactPoint, struct FVector* CallFunc_BreakHitResult_Normal, struct FVector* CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial** CallFunc_BreakHitResult_PhysMat, class AActor** CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent** CallFunc_BreakHitResult_HitComponent, class FName* CallFunc_BreakHitResult_HitBoneName, class FName* CallFunc_BreakHitResult_BoneName, int32* CallFunc_BreakHitResult_HitItem, int32* CallFunc_BreakHitResult_ElementIndex, int32* CallFunc_BreakHitResult_FaceIndex, bool CallFunc_Can_Element_Decrease_CanDecrease, float* CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast, float* CallFunc_MakeRotator_Yaw_ImplicitCast);
};

}


