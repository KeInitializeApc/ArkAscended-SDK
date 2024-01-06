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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB60(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	class UNiagaraComponent*                     NiagaraSystemFPV;                                  // 0xB68(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UAudioComponent*                       Audio;                                             // 0xB70(0x8)(Edit, Net, EditFixedSize, ReturnParm)
	class UNiagaraComponent*                     NiagaraSystemTPV;                                  // 0xB78(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	class UStaticMeshComponent*                  BeltTorchSM;                                       // 0xB80(0x8)(BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, EditConst, SubobjectReference)
	class USceneComponent*                       Transform;                                         // 0xB88(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	class UPrimalItem*                           AssociatedTorchItem;                               // 0xB90(0x8)(ExportObject, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	int32                                        AssociatedTorchItemID1;                            // 0xB98(0x4)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	int32                                        AssociatedTorchItemID2;                            // 0xB9C(0x4)(ConstParm, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         bAreTorchIDsInitialized;                           // 0xBA0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	bool                                         bIsTorchMeshInitialized;                           // 0xBA1(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
	uint8                                        Pad_3169[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterWeapon_Melee*                  DefaultTorchWeapon;                                // 0xBA8(0x8)(ExportObject, ReturnParm, EditConst, SubobjectReference)
	double                                       LastTimeConsumedDurability;                        // 0xBB0(0x8)(Edit, Net, OutParm, ZeroConstructor, EditConst, SubobjectReference)
	double                                       ItemPassiveDurabilityConsumptionMultiplier;        // 0xBB8(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, SubobjectReference)
	TArray<struct FLinearColor>                  TorchColors;                                       // 0xBC0(0x10)(ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
	bool                                         bAreTorchColorsInitialized;                        // 0xBD0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	uint8                                        Pad_316C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                AssociatedWeaponClass;                             // 0xBD8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, EditConst, SubobjectReference)
	bool                                         bIsFlameColorInitialized;                          // 0xBE0(0x1)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
	uint8                                        Pad_316D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        FlameColorIndex;                                   // 0xBE4(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, EditConst, SubobjectReference)
	bool                                         bUseCascade;                                       // 0xBE8(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	bool                                         bIsInitializedFromSave;                            // 0xBE9(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, EditConst, SubobjectReference)
	bool                                         bUseFPV;                                           // 0xBEA(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
	uint8                                        Pad_3170[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               FPVLightOffset;                                    // 0xBF0(0x18)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class ABuff_BeltTorch_C* GetDefaultObj();

	bool ActivateVFX(class AShooterCharacter** K2Node_DynamicCast_AsShooter_Character);
	struct FHitResult UpdateTorchType(const struct FRotator& CallFunc_GetActorEyesViewPoint_OutRotation, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	void BPTryMultiUse(class APlayerController* ForPC, int32* UseIndex, bool* ReturnValue);
	void BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries, TArray<struct FMultiUseEntry>* ReturnValue);
	bool InitializeTorchFromItem(bool CallFunc_NotEqual_ClassClass_ReturnValue, class AShooterWeapon_Melee* K2Node_DynamicCast_AsShooter_Weapon_Melee, bool* CallFunc_IsValidClass_ReturnValue, bool* CallFunc_ActorHasTag_ReturnValue, class UPrimalItem_WeaponTorch_C** K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch, class UClass* K2Node_ClassDynamicCast_AsShooter_Weapon, bool* K2Node_ClassDynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue);
	bool SetFlameColorIndex(bool CallFunc_IsServer_ReturnValue);
	bool UpdateTorchFlameColor(bool* CallFunc_NotEqual_LinearColorLinearColor_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue);
	bool SetTorchFlameColor();
	bool InitializeAssociatedWeaponClass(bool CallFunc_IsServer_ReturnValue);
	bool Update_All_Torch_Colors(int32* CallFunc_Add_IntInt_ReturnValue);
	bool UpdateTorchColorsArray(bool CallFunc_LessEqual_IntInt_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue, class UPrimalItem_WeaponTorch_C** K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch, bool* CallFunc_NotEqual_LinearColorLinearColor_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	bool SetTorchColorByIndex(int32* CallFunc_Add_IntInt_ReturnValue, class UMaterialInstanceDynamic** CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool* CallFunc_NotEqual_LinearColorLinearColor_ReturnValue, class UPrimalItem_WeaponTorch_C** K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch);
	bool ApplyMeshColorization(bool CallFunc_Not_PreBool_ReturnValue);
	bool ShouldDeactivateBuff(bool* bShouldDeactivate, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool CallFunc_IsSubmerged_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
	bool InitializeDefaultTorchWeapon(bool* CallFunc_IsValidClass_ReturnValue, class AShooterWeapon_Melee* K2Node_DynamicCast_AsShooter_Weapon_Melee);
	bool InitializeTorchMesh(bool* CallFunc_ActorHasTag_ReturnValue);
	bool DeactivateBeltTorch(bool CallFunc_IsServer_ReturnValue);
	bool AreValidTorchIDs(int32 TorchID2, bool* CallFunc_BooleanAND_ReturnValue, class AShooterCharacter** K2Node_DynamicCast_AsShooter_Character, class UPrimalItem* CallFunc_BPFindItemWithID_ReturnValue);
	bool InitializeTorchItem(bool* bInitialized, bool* CallFunc_BooleanAND_ReturnValue, class AShooterCharacter** K2Node_DynamicCast_AsShooter_Character, class UPrimalItem* CallFunc_BPFindItemWithID_ReturnValue);
	bool InitializeTorchIDs(int32* CallFunc_BPGetItemID_ItemID1, bool CallFunc_IsServer_ReturnValue);
	void Server_DeactivateBeltTorch();
	float BuffTickServer();
	int32 SetTorchColorByIndex_Multicast();
	void BPOnInputEvent(enum class EPrimalCharacterInputType InputType);
	struct FLinearColor SetTorchFlameColor_Multicast();
	float BuffTickClient();
	void BPDeactivated(class AActor* ForInstigator);
	float ExecuteUbergraph_Buff_BeltTorch(int32* EntryPoint, class AShooterCharacter** K2Node_DynamicCast_AsShooter_Character, bool* CallFunc_IsTimeSince_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, int32 K2Node_CustomEvent_TheIndex, class AActor** CallFunc_GetOwner_ReturnValue, class AShooterCharacter** K2Node_DynamicCast_AsShooter_Character_1, bool* CallFunc_BooleanAND_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_1, class AActor** K2Node_Event_ForInstigator, enum class ENetworkModeResult CallFunc_CanRunCosmeticEvents_OutNetworkMode, bool CallFunc_Not_PreBool_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_2, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast);
};

}


