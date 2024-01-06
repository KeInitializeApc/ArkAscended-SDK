#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0xC08 - 0xB60)
// BlueprintGeneratedClass Buff_BeltTorch.Buff_BeltTorch_C
class ABuff_BeltTorch_C : public APrimalBuff
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB60(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	class UNiagaraComponent*                     NiagaraSystemFPV;                                  // 0xB68(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UAudioComponent*                       Audio;                                             // 0xB70(0x8)(Edit, Net, EditFixedSize, ReturnParm)
	class UNiagaraComponent*                     NiagaraSystemTPV;                                  // 0xB78(0x8)(BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UStaticMeshComponent*                  BeltTorchSM;                                       // 0xB80(0x8)(Edit, EditFixedSize, DisableEditOnTemplate, EditConst, SubobjectReference)
	class USceneComponent*                       Transform;                                         // 0xB88(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	class UPrimalItem*                           AssociatedTorchItem;                               // 0xB90(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	int32                                        AssociatedTorchItemID1;                            // 0xB98(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	int32                                        AssociatedTorchItemID2;                            // 0xB9C(0x4)(OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         bAreTorchIDsInitialized;                           // 0xBA0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         bIsTorchMeshInitialized;                           // 0xBA1(0x1)(Net, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_2BF0[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterWeapon_Melee*                  DefaultTorchWeapon;                                // 0xBA8(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	double                                       LastTimeConsumedDurability;                        // 0xBB0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	double                                       ItemPassiveDurabilityConsumptionMultiplier;        // 0xBB8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	TArray<struct FLinearColor>                  TorchColors;                                       // 0xBC0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         bAreTorchColorsInitialized;                        // 0xBD0(0x1)(Edit, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_2BF2[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                AssociatedWeaponClass;                             // 0xBD8(0x8)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	bool                                         bIsFlameColorInitialized;                          // 0xBE0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_2BF5[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        FlameColorIndex;                                   // 0xBE4(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         bUseCascade;                                       // 0xBE8(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         bIsInitializedFromSave;                            // 0xBE9(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	bool                                         bUseFPV;                                           // 0xBEA(0x1)(BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_2BF7[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               FPVLightOffset;                                    // 0xBF0(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class ABuff_BeltTorch_C* GetDefaultObj();

	bool ActivateVFX(class APawn** CallFunc_GetInstigator_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool CallFunc_IsLocallyControlledByPlayer_ReturnValue);
	void UpdateTorchType(bool FPV, class APawn** CallFunc_GetInstigator_ReturnValue, struct FVector* CallFunc_GetActorEyesViewPoint_OutLocation, struct FRotator* CallFunc_GetActorEyesViewPoint_OutRotation, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, struct FVector* CallFunc_Add_VectorVector_ReturnValue, struct FTransform* CallFunc_MakeTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult);
	int32 BPTryMultiUse(class APlayerController* ForPC, bool* ReturnValue);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* ReturnValue);
	bool InitializeTorchFromItem(class UClass** WeaponClassOverride, bool* CallFunc_NotEqual_ClassClass_ReturnValue, class AShooterWeapon_Melee* K2Node_DynamicCast_AsShooter_Weapon_Melee, class UClass** CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, int32* CallFunc_GetFlameColorIndex_Index, class UClass** K2Node_ClassDynamicCast_AsShooter_Weapon, bool CallFunc_IsValidSoftClassReference_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	bool SetFlameColorIndex(bool CallFunc_IsServer_ReturnValue);
	bool UpdateTorchFlameColor(const struct FLinearColor& K2Node_MakeStruct_LinearColor, bool CallFunc_Array_IsValidIndex_ReturnValue);
	bool SetTorchFlameColor(struct FVector* CallFunc_Conv_LinearColorToVector_ReturnValue);
	bool InitializeAssociatedWeaponClass(bool CallFunc_IsServer_ReturnValue);
	bool Update_All_Torch_Colors(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Add_IntInt_ReturnValue);
	bool UpdateTorchColorsArray(bool CallFunc_LessEqual_IntInt_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, int32* CallFunc_GetFlameColorIndex_Index, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue, bool* CallFunc_BooleanOR_ReturnValue);
	bool SetTorchColorByIndex(int32* TheColorIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<class UMaterialInterface*>* CallFunc_GetMaterials_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor);
	bool ApplyMeshColorization(bool* CallFunc_Not_PreBool_ReturnValue);
	bool ShouldDeactivateBuff(class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool CallFunc_IsSubmerged_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
	bool InitializeDefaultTorchWeapon(class AShooterWeapon_Melee* K2Node_DynamicCast_AsShooter_Weapon_Melee);
	bool InitializeTorchMesh();
	bool DeactivateBeltTorch(bool bEquipTorchOnDeactivation, bool CallFunc_IsServer_ReturnValue);
	bool AreValidTorchIDs(int32 TorchID1, int32* TorchID2, bool* CallFunc_BooleanAND_ReturnValue, class APawn** CallFunc_GetInstigator_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character);
	bool InitializeTorchItem(class APawn** CallFunc_GetInstigator_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character);
	bool InitializeTorchIDs(class UPrimalItem** TorchItem, int32 CallFunc_BPGetItemID_ItemID2, bool CallFunc_AreValidTorchIDs_bAreValid, bool CallFunc_IsServer_ReturnValue);
	void Server_DeactivateBeltTorch();
	float BuffTickServer();
	int32 SetTorchColorByIndex_Multicast();
	void BPOnInputEvent(enum class EPrimalCharacterInputType InputType);
	struct FLinearColor SetTorchFlameColor_Multicast();
	float BuffTickClient();
	void BPDeactivated(class AActor* ForInstigator);
	class AActor* ExecuteUbergraph_Buff_BeltTorch(int32 EntryPoint, bool CallFunc_AreValidTorchIDs_bAreValid, bool CallFunc_InitializeTorchItem_bInitialized, bool* CallFunc_ShouldDeactivateBuff_bShouldDeactivate, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool CallFunc_IsTimeSince_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, int32* K2Node_CustomEvent_TheIndex, enum class EPrimalCharacterInputType* K2Node_Event_inputType, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character_1, bool CallFunc_IsLocallyControlledByPlayer_ReturnValue, bool CallFunc_IsFirstPerson_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_1, enum class ENetworkModeResult* CallFunc_CanRunCosmeticEvents_OutNetworkMode, bool* K2Node_SwitchEnum_CmpSuccess, bool* CallFunc_Not_PreBool_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_2, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast, float CallFunc_Multiply_DoubleFloat_B_ImplicitCast, float CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast);
};

}


