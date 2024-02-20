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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB60(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UNiagaraComponent*                     NiagaraSystemFPV;                                  // 0xB68(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	class UAudioComponent*                       Audio;                                             // 0xB70(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm)
	class UNiagaraComponent*                     NiagaraSystemTPV;                                  // 0xB78(0x8)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
	class UStaticMeshComponent*                  BeltTorchSM;                                       // 0xB80(0x8)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, SubobjectReference)
	class USceneComponent*                       Transform;                                         // 0xB88(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	class UPrimalItem*                           AssociatedTorchItem;                               // 0xB90(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
	int32                                        AssociatedTorchItemID1;                            // 0xB98(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, SubobjectReference)
	int32                                        AssociatedTorchItemID2;                            // 0xB9C(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	bool                                         bAreTorchIDsInitialized;                           // 0xBA0(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Transient, SubobjectReference)
	bool                                         bIsTorchMeshInitialized;                           // 0xBA1(0x1)(Edit, Net, EditFixedSize, ReturnParm, Transient, SubobjectReference)
	uint8                                        Pad_3203[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterWeapon_Melee*                  DefaultTorchWeapon;                                // 0xBA8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	double                                       LastTimeConsumedDurability;                        // 0xBB0(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, Transient, SubobjectReference)
	double                                       ItemPassiveDurabilityConsumptionMultiplier;        // 0xBB8(0x8)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	TArray<struct FLinearColor>                  TorchColors;                                       // 0xBC0(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         bAreTorchColorsInitialized;                        // 0xBD0(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, SubobjectReference)
	uint8                                        Pad_3204[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                AssociatedWeaponClass;                             // 0xBD8(0x8)(Edit, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         bIsFlameColorInitialized;                          // 0xBE0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_3206[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        FlameColorIndex;                                   // 0xBE4(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         bUseCascade;                                       // 0xBE8(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
	bool                                         bIsInitializedFromSave;                            // 0xBE9(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         bUseFPV;                                           // 0xBEA(0x1)(Edit, BlueprintReadOnly, Net, ReturnParm, Transient, SubobjectReference)
	uint8                                        Pad_3208[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               FPVLightOffset;                                    // 0xBF0(0x18)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, SubobjectReference)

	static class UClass* StaticClass();
	static class ABuff_BeltTorch_C* GetDefaultObj();

	bool ActivateVFX(bool CallFunc_K2_AttachToComponent_ReturnValue);
	struct FTransform UpdateTorchType(bool* FPV, struct FHitResult* CallFunc_K2_SetWorldTransform_SweepHitResult);
	int32 BPTryMultiUse(bool ReturnValue);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(const TArray<struct FMultiUseEntry>& ReturnValue);
	bool InitializeTorchFromItem(bool CallFunc_ActorHasTag_ReturnValue, class UPrimalItem_WeaponTorch_C** K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch, bool K2Node_ClassDynamicCast_bSuccess, bool* CallFunc_IsValid_ReturnValue);
	bool SetFlameColorIndex(bool* CallFunc_EqualEqual_IntInt_ReturnValue);
	bool UpdateTorchFlameColor(bool* CallFunc_NotEqual_LinearColorLinearColor_ReturnValue);
	bool SetTorchFlameColor();
	bool InitializeAssociatedWeaponClass();
	bool Update_All_Torch_Colors();
	bool UpdateTorchColorsArray(bool* CallFunc_IsValid_ReturnValue, const struct FLinearColor& CallFunc_GetItemCustomColor_outColor, class UPrimalItem_WeaponTorch_C** K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_NotEqual_LinearColorLinearColor_ReturnValue);
	bool SetTorchColorByIndex(bool* CallFunc_InRange_IntInt_ReturnValue, class UMaterialInstanceDynamic** CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic** K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool* CallFunc_NotEqual_LinearColorLinearColor_ReturnValue, class UPrimalItem_WeaponTorch_C** K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch);
	bool ApplyMeshColorization(bool* CallFunc_IsValid_ReturnValue);
	double ShouldDeactivateBuff(bool* bShouldDeactivate, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1);
	bool InitializeDefaultTorchWeapon(bool* CallFunc_IsValid_ReturnValue);
	bool InitializeTorchMesh(bool CallFunc_ActorHasTag_ReturnValue, bool* CallFunc_IsValid_ReturnValue);
	bool DeactivateBeltTorch(bool* bEquipTorchOnDeactivation, bool* CallFunc_IsValid_ReturnValue);
	bool AreValidTorchIDs(bool bAreValid, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1, class UPrimalItem** CallFunc_BPFindItemWithID_ReturnValue, bool* CallFunc_IsValid_ReturnValue);
	bool InitializeTorchItem(bool bInitialized, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1, class UPrimalItem** CallFunc_BPFindItemWithID_ReturnValue, bool* CallFunc_IsValid_ReturnValue);
	bool InitializeTorchIDs(int32 CallFunc_BPGetItemID_ItemID1, int32* CallFunc_BPGetItemID_ItemID2, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1);
	void Server_DeactivateBeltTorch();
	float BuffTickServer();
	int32 SetTorchColorByIndex_Multicast();
	enum class EPrimalCharacterInputType BPOnInputEvent();
	struct FLinearColor SetTorchFlameColor_Multicast();
	float BuffTickClient();
	class AActor* BPDeactivated();
	float ExecuteUbergraph_Buff_BeltTorch(float* K2Node_Event_DeltaTime_1, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool CallFunc_ObjectIsChildOf_ReturnValue, bool* CallFunc_IsValid_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue_3, const struct FLinearColor& K2Node_CustomEvent_TheColor_1, bool* CallFunc_IsValid_ReturnValue_4, const struct FLinearColor& K2Node_CustomEvent_TheColor, bool* CallFunc_IsFirstPerson_ReturnValue, float* K2Node_Event_DeltaTime, class AActor** K2Node_Event_ForInstigator);
};

}


