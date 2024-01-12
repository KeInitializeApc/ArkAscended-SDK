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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB60(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UNiagaraComponent*                     NiagaraSystemFPV;                                  // 0xB68(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UAudioComponent*                       Audio;                                             // 0xB70(0x8)(Edit, Net, EditFixedSize, ReturnParm)
	class UNiagaraComponent*                     NiagaraSystemTPV;                                  // 0xB78(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	class UStaticMeshComponent*                  BeltTorchSM;                                       // 0xB80(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	class USceneComponent*                       Transform;                                         // 0xB88(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	class UPrimalItem*                           AssociatedTorchItem;                               // 0xB90(0x8)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	int32                                        AssociatedTorchItemID1;                            // 0xB98(0x4)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	int32                                        AssociatedTorchItemID2;                            // 0xB9C(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         bAreTorchIDsInitialized;                           // 0xBA0(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	bool                                         bIsTorchMeshInitialized;                           // 0xBA1(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	uint8                                        Pad_B3F[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	class AShooterWeapon_Melee*                  DefaultTorchWeapon;                                // 0xBA8(0x8)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, EditConst, SubobjectReference)
	double                                       LastTimeConsumedDurability;                        // 0xBB0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, EditConst, SubobjectReference)
	double                                       ItemPassiveDurabilityConsumptionMultiplier;        // 0xBB8(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, EditConst, SubobjectReference)
	TArray<struct FLinearColor>                  TorchColors;                                       // 0xBC0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	bool                                         bAreTorchColorsInitialized;                        // 0xBD0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	uint8                                        Pad_B43[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UClass*                                AssociatedWeaponClass;                             // 0xBD8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, EditConst, SubobjectReference)
	bool                                         bIsFlameColorInitialized;                          // 0xBE0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	uint8                                        Pad_B45[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        FlameColorIndex;                                   // 0xBE4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	bool                                         bUseCascade;                                       // 0xBE8(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	bool                                         bIsInitializedFromSave;                            // 0xBE9(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, EditConst, SubobjectReference)
	bool                                         bUseFPV;                                           // 0xBEA(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	uint8                                        Pad_B49[0x5];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               FPVLightOffset;                                    // 0xBF0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class ABuff_BeltTorch_C* GetDefaultObj();

	bool ActivateVFX(class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlledByPlayer_ReturnValue);
	struct FHitResult UpdateTorchType(struct FRotator* CallFunc_GetActorEyesViewPoint_OutRotation);
	bool BPTryMultiUse(int32 UseIndex);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(const TArray<struct FMultiUseEntry>& MultiUseEntries);
	bool InitializeTorchFromItem(class AShooterWeapon_Melee* K2Node_DynamicCast_AsShooter_Weapon_Melee, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_IsValidClass_ReturnValue, class UPrimalItem_WeaponTorch_C** K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch, bool* K2Node_DynamicCast_bSuccess_1, int32* CallFunc_GetFlameColorIndex_Index, class UClass** K2Node_ClassDynamicCast_AsShooter_Weapon, bool CallFunc_IsValidSoftClassReference_ReturnValue, bool* CallFunc_IsValid_ReturnValue);
	bool SetFlameColorIndex(int32 TheIndex);
	bool UpdateTorchFlameColor(class UMaterialInstanceDynamic* TheMIC, const struct FLinearColor& K2Node_MakeStruct_LinearColor, bool CallFunc_Array_IsValidIndex_ReturnValue);
	bool SetTorchFlameColor(const struct FLinearColor& TheColor, class UMaterialInstanceDynamic* TheMIC, struct FVector* CallFunc_Conv_LinearColorToVector_ReturnValue);
	bool InitializeAssociatedWeaponClass(class UClass** WeaponClass);
	bool Update_All_Torch_Colors(int32 CallFunc_Add_IntInt_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, struct FLinearColor* CallFunc_Array_Get_Item);
	bool UpdateTorchColorsArray(bool* CallFunc_IsValid_ReturnValue, int32* Temp_int_Variable, const struct FLinearColor& CallFunc_GetItemCustomColor_outColor, bool CallFunc_GetItemCustomColor_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, class UPrimalItem_WeaponTorch_C** K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch, bool* K2Node_DynamicCast_bSuccess, int32* CallFunc_GetFlameColorIndex_Index, struct FLinearColor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue);
	class UObject* SetTorchColorByIndex(const struct FLinearColor& TheColor, class UMaterialInstanceDynamic* TheMIC, int32 CallFunc_Add_IntInt_ReturnValue, class UMaterialInterface** CallFunc_Array_Get_Item, bool* K2Node_DynamicCast_bSuccess, int32* CallFunc_Array_Length_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, class UPrimalItem_WeaponTorch_C** K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch, bool* K2Node_DynamicCast_bSuccess_1);
	bool ApplyMeshColorization(bool* CallFunc_IsValid_ReturnValue);
	bool ShouldDeactivateBuff(class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_IsSubmerged_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
	class UObject* InitializeDefaultTorchWeapon(bool CallFunc_IsValidClass_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class AShooterWeapon_Melee* K2Node_DynamicCast_AsShooter_Weapon_Melee, bool* K2Node_DynamicCast_bSuccess);
	bool InitializeTorchMesh(bool* CallFunc_IsValid_ReturnValue);
	bool DeactivateBeltTorch(bool* CallFunc_IsValid_ReturnValue);
	class APawn* AreValidTorchIDs(int32* TorchID2, bool CallFunc_BooleanAND_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, class UPrimalItem** CallFunc_BPFindItemWithID_ReturnValue, bool* CallFunc_IsValid_ReturnValue);
	class APawn* InitializeTorchItem(bool bInitialized, bool CallFunc_BooleanAND_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, class UPrimalItem** CallFunc_BPFindItemWithID_ReturnValue, bool* CallFunc_IsValid_ReturnValue);
	bool InitializeTorchIDs(bool CallFunc_AreValidTorchIDs_bAreValid, bool* CallFunc_IsValid_ReturnValue);
	void Server_DeactivateBeltTorch();
	void BuffTickServer(float* DeltaTime);
	void SetTorchColorByIndex_Multicast(const struct FLinearColor& TheColor, int32 TheIndex);
	enum class EPrimalCharacterInputType BPOnInputEvent();
	void SetTorchFlameColor_Multicast(const struct FLinearColor& TheColor);
	void BuffTickClient(float* DeltaTime);
	class AActor* BPDeactivated();
	float ExecuteUbergraph_Buff_BeltTorch(bool CallFunc_AreValidTorchIDs_bAreValid, bool* CallFunc_IsValid_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsTimeSince_ReturnValue, bool* CallFunc_IsValid_ReturnValue_3, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, int32* K2Node_CustomEvent_TheIndex, int32* CallFunc_Array_Length_ReturnValue, bool* CallFunc_IsValid_ReturnValue_4, class AActor** CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character_1, bool* K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsLocallyControlledByPlayer_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, enum class ENetworkModeResult CallFunc_CanRunCosmeticEvents_OutNetworkMode, bool CallFunc_BooleanAND_ReturnValue_2, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast, float CallFunc_Multiply_DoubleFloat_B_ImplicitCast);
};

}


