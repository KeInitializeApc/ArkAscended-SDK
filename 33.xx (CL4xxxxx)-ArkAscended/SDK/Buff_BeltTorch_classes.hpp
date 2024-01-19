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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB60(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UNiagaraComponent*                     NiagaraSystemFPV;                                  // 0xB68(0x8)(Edit, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
	class UAudioComponent*                       Audio;                                             // 0xB70(0x8)(Edit, Net, EditFixedSize, ReturnParm)
	class UNiagaraComponent*                     NiagaraSystemTPV;                                  // 0xB78(0x8)(Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	class UStaticMeshComponent*                  BeltTorchSM;                                       // 0xB80(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference)
	class USceneComponent*                       Transform;                                         // 0xB88(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	class UPrimalItem*                           AssociatedTorchItem;                               // 0xB90(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	int32                                        AssociatedTorchItemID1;                            // 0xB98(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	int32                                        AssociatedTorchItemID2;                            // 0xB9C(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
	bool                                         bAreTorchIDsInitialized;                           // 0xBA0(0x1)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	bool                                         bIsTorchMeshInitialized;                           // 0xBA1(0x1)(ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_468C[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterWeapon_Melee*                  DefaultTorchWeapon;                                // 0xBA8(0x8)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	double                                       LastTimeConsumedDurability;                        // 0xBB0(0x8)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	double                                       ItemPassiveDurabilityConsumptionMultiplier;        // 0xBB8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	TArray<struct FLinearColor>                  TorchColors;                                       // 0xBC0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
	bool                                         bAreTorchColorsInitialized;                        // 0xBD0(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_468D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                AssociatedWeaponClass;                             // 0xBD8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         bIsFlameColorInitialized;                          // 0xBE0(0x1)(Edit, Net, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_468E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        FlameColorIndex;                                   // 0xBE4(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference)
	bool                                         bUseCascade;                                       // 0xBE8(0x1)(Edit, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	bool                                         bIsInitializedFromSave;                            // 0xBE9(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
	bool                                         bUseFPV;                                           // 0xBEA(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_468F[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               FPVLightOffset;                                    // 0xBF0(0x18)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class ABuff_BeltTorch_C* GetDefaultObj();

	bool ActivateVFX(class APawn* CallFunc_GetInstigator_ReturnValue);
	struct FVector UpdateTorchType(bool* FPV, class APawn* CallFunc_GetInstigator_ReturnValue, struct FVector* CallFunc_GetActorEyesViewPoint_OutLocation, struct FVector* CallFunc_GreaterGreater_VectorRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, struct FHitResult* CallFunc_K2_SetWorldTransform_SweepHitResult);
	int32 BPTryMultiUse(class APlayerController** ForPC, bool ReturnValue);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, const TArray<struct FMultiUseEntry>& ReturnValue);
	bool InitializeTorchFromItem(class UPrimalItem* TheItem, class UClass** WeaponClassOverride, class UObject* CallFunc_GetClassDefaultObject_ReturnValue, class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, int32* CallFunc_GetFlameColorIndex_Index);
	bool SetFlameColorIndex(bool CallFunc_EqualEqual_IntInt_ReturnValue);
	bool UpdateTorchFlameColor();
	bool SetTorchFlameColor(struct FVector* CallFunc_Conv_LinearColorToVector_ReturnValue);
	bool InitializeAssociatedWeaponClass(bool* CallFunc_EqualEqual_ObjectObject_ReturnValue);
	int32 Update_All_Torch_Colors(int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Array_Length_ReturnValue, const struct FLinearColor& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	bool UpdateTorchColorsArray(class UPrimalItem* ForPrimalItem, struct FLinearColor* CallFunc_GetItemCustomColor_outColor, bool* CallFunc_GetItemCustomColor_ReturnValue, int32* CallFunc_GetFlameColorIndex_Index, const struct FLinearColor& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_BooleanOR_ReturnValue);
	bool SetTorchColorByIndex(int32 TheColorIndex, bool CallFunc_InRange_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UObject* CallFunc_GetClassDefaultObject_ReturnValue);
	bool ApplyMeshColorization();
	double ShouldDeactivateBuff();
	bool InitializeDefaultTorchWeapon(class UObject* CallFunc_GetClassDefaultObject_ReturnValue);
	bool InitializeTorchMesh();
	bool DeactivateBeltTorch(bool* bEquipTorchOnDeactivation);
	bool AreValidTorchIDs(int32* TorchID1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue);
	bool InitializeTorchItem(bool* bInitialized, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class APawn* CallFunc_GetInstigator_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	bool InitializeTorchIDs(class UPrimalItem* TorchItem, int32* CallFunc_BPGetItemID_ItemID2, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1);
	void Server_DeactivateBeltTorch();
	float BuffTickServer();
	int32 SetTorchColorByIndex_Multicast();
	void BPOnInputEvent(enum class EPrimalCharacterInputType InputType);
	struct FLinearColor SetTorchFlameColor_Multicast();
	float BuffTickClient();
	void BPDeactivated(class AActor** ForInstigator);
	float ExecuteUbergraph_Buff_BeltTorch(int32 EntryPoint, float K2Node_Event_DeltaTime_1, bool CallFunc_InitializeTorchItem_bInitialized, bool CallFunc_ShouldDeactivateBuff_bShouldDeactivate, const struct FLinearColor& K2Node_CustomEvent_TheColor_1, int32* CallFunc_Array_Length_ReturnValue, enum class EPrimalCharacterInputType* K2Node_Event_inputType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FLinearColor& K2Node_CustomEvent_TheColor, bool* CallFunc_IsFirstPerson_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float K2Node_Event_DeltaTime, bool CallFunc_BooleanAND_ReturnValue_1, bool* K2Node_SwitchEnum_CmpSuccess, bool CallFunc_BooleanAND_ReturnValue_2, float* CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast);
};

}


