#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0xC10 - 0xB68)
// BlueprintGeneratedClass Buff_BeltTorch.Buff_BeltTorch_C
class ABuff_BeltTorch_C : public APrimalBuff
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB68(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UNiagaraComponent*                     NiagaraSystemFPV;                                  // 0xB70(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	class UAudioComponent*                       Audio;                                             // 0xB78(0x8)(Edit, EditFixedSize, DisableEditOnTemplate)
	class UNiagaraComponent*                     NiagaraSystemTPV;                                  // 0xB80(0x8)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	class UStaticMeshComponent*                  BeltTorchSM;                                       // 0xB88(0x8)(Edit, ExportObject, EditFixedSize, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	class USceneComponent*                       Transform;                                         // 0xB90(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	class UPrimalItem*                           AssociatedTorchItem;                               // 0xB98(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        AssociatedTorchItemID1;                            // 0xBA0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        AssociatedTorchItemID2;                            // 0xBA4(0x4)(ExportObject, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bAreTorchIDsInitialized;                           // 0xBA8(0x1)(ConstParm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bIsTorchMeshInitialized;                           // 0xBA9(0x1)(ExportObject, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_44C0[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterWeapon_Melee*                  DefaultTorchWeapon;                                // 0xBB0(0x8)(BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference)
	double                                       LastTimeConsumedDurability;                        // 0xBB8(0x8)(Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       ItemPassiveDurabilityConsumptionMultiplier;        // 0xBC0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	TArray<struct FLinearColor>                  TorchColors;                                       // 0xBC8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bAreTorchColorsInitialized;                        // 0xBD8(0x1)(Edit, ExportObject, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_44C2[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                AssociatedWeaponClass;                             // 0xBE0(0x8)(ExportObject, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bIsFlameColorInitialized;                          // 0xBE8(0x1)(ConstParm, BlueprintVisible, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_44C3[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        FlameColorIndex;                                   // 0xBEC(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bUseCascade;                                       // 0xBF0(0x1)(Edit, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bIsInitializedFromSave;                            // 0xBF1(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bUseFPV;                                           // 0xBF2(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_44C4[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               FPVLightOffset;                                    // 0xBF8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class ABuff_BeltTorch_C* GetDefaultObj();

	void ActivateVFX(class APawn* CallFunc_GetInstigator_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_IsLocallyControlledByPlayer_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue);
	struct FVector UpdateTorchType(bool* FPV, class APawn* CallFunc_GetInstigator_ReturnValue, const struct FVector& CallFunc_GetActorEyesViewPoint_OutLocation, struct FVector* CallFunc_GreaterGreater_VectorRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, struct FHitResult* CallFunc_K2_SetWorldTransform_SweepHitResult);
	bool BPTryMultiUse(class APlayerController** ForPC);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC);
	bool InitializeTorchFromItem(class UClass* WeaponClassOverride, bool CallFunc_NotEqual_ClassClass_ReturnValue, class UObject** CallFunc_GetClassDefaultObject_ReturnValue, class AShooterWeapon_Melee** K2Node_DynamicCast_AsShooter_Weapon_Melee, bool* K2Node_DynamicCast_bSuccess, bool* K2Node_DynamicCast_bSuccess_1, class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, bool* CallFunc_IsValidSoftClassReference_ReturnValue);
	bool SetFlameColorIndex(bool* CallFunc_EqualEqual_IntInt_ReturnValue);
	bool UpdateTorchFlameColor(struct FLinearColor* K2Node_MakeStruct_LinearColor, bool* CallFunc_Array_IsValidIndex_ReturnValue);
	bool SetTorchFlameColor();
	bool InitializeAssociatedWeaponClass();
	bool Update_All_Torch_Colors(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FLinearColor& CallFunc_Array_Get_Item);
	bool UpdateTorchColorsArray(int32* Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, struct FLinearColor* K2Node_MakeStruct_LinearColor, bool* K2Node_DynamicCast_bSuccess, const struct FLinearColor& CallFunc_Array_Get_Item, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_Array_IsValidIndex_ReturnValue);
	class UPrimalItem_WeaponTorch_C* SetTorchColorByIndex(int32 TheColorIndex, bool CallFunc_InRange_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool* K2Node_DynamicCast_bSuccess, struct FLinearColor* K2Node_MakeStruct_LinearColor, class UObject** CallFunc_GetClassDefaultObject_ReturnValue, bool* K2Node_DynamicCast_bSuccess_1);
	bool ApplyMeshColorization();
	bool ShouldDeactivateBuff(class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_IsSubmerged_ReturnValue, double* CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
	bool InitializeDefaultTorchWeapon(class UObject** CallFunc_GetClassDefaultObject_ReturnValue, class AShooterWeapon_Melee** K2Node_DynamicCast_AsShooter_Weapon_Melee, bool* K2Node_DynamicCast_bSuccess);
	bool InitializeTorchMesh();
	bool DeactivateBeltTorch(bool* bEquipTorchOnDeactivation);
	bool AreValidTorchIDs(int32* TorchID1, bool bAreValid, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1, class APawn* CallFunc_GetInstigator_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess);
	bool InitializeTorchItem(bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1, class APawn* CallFunc_GetInstigator_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess);
	bool InitializeTorchIDs(class UPrimalItem* TorchItem, int32* CallFunc_BPGetItemID_ItemID2, bool* CallFunc_AreValidTorchIDs_bAreValid, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1);
	void Server_DeactivateBeltTorch();
	float BuffTickServer();
	int32 SetTorchColorByIndex_Multicast();
	void BPOnInputEvent(enum class EPrimalCharacterInputType* InputType);
	struct FLinearColor SetTorchFlameColor_Multicast();
	float BuffTickClient();
	void BPDeactivated(class AActor** ForInstigator);
	bool ExecuteUbergraph_Buff_BeltTorch(int32* EntryPoint, float K2Node_Event_DeltaTime_1, bool* CallFunc_AreValidTorchIDs_bAreValid, bool* CallFunc_InitializeTorchItem_bInitialized, bool CallFunc_ShouldDeactivateBuff_bShouldDeactivate, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_ObjectIsChildOf_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, const struct FLinearColor& K2Node_CustomEvent_TheColor_1, bool* CallFunc_Greater_IntInt_ReturnValue, enum class EPrimalCharacterInputType K2Node_Event_inputType, bool* CallFunc_Greater_IntInt_ReturnValue_1, const struct FLinearColor& K2Node_CustomEvent_TheColor, class AActor* CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character_1, bool* K2Node_DynamicCast_bSuccess_1, bool* CallFunc_IsLocallyControlledByPlayer_ReturnValue, bool* CallFunc_IsFirstPerson_ReturnValue, float K2Node_Event_DeltaTime, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast, float* CallFunc_Multiply_DoubleFloat_B_ImplicitCast, float* CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast);
};

}


