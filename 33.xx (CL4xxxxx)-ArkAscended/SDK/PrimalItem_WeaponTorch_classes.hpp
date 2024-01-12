#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xEE0 - 0xEB0)
// BlueprintGeneratedClass PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C
class UPrimalItem_WeaponTorch_C : public UPrimalItemWeaponGenericAmmoless_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEB0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	double                                       DurabilityLossPerSecond;                           // 0xEB8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FLinearColor                          TorchOnBeltWidgetTextColor;                        // 0xEC0(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class FString                                TorchOnBeltWidgetText;                             // 0xED0(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItem_WeaponTorch_C* GetDefaultObj();

	bool BPPreventNewColorization(bool CallFunc_IsTorchOnBelt_bIsOnBelt);
	class FName GetFlameColorIndex(bool* CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, int32* CallFunc_SelectInt_ReturnValue);
	bool UpdateBeltTorchMeshColors(class AActor** CallFunc_GetOwner_ReturnValue, bool CallFunc_IsTorchOnBelt_bIsOnBelt, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, class APrimalBuff* CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff, class ABuff_BeltTorch_C** K2Node_DynamicCast_AsBuff_Belt_Torch, bool* K2Node_DynamicCast_bSuccess_1);
	bool BPShouldHideTopLevelCustomContextMenuOption(class FName ContextItem, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, class AShooterCharacter** CallFunc_GetOwnerPlayer_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool* CallFunc_IsValid_ReturnValue);
	bool BPPreventWeaponEquip(bool* CallFunc_CanTorchBeOnBelt_bCanBeOnBelt, bool CallFunc_IsTorchOnBelt_bIsOnBelt, class AActor** CallFunc_GetOwner_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, class AShooterWeapon* CallFunc_GetWeapon_ReturnValue);
	class AShooterCharacter* RemoveTorchFromBelt(class APrimalBuff* CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff, class ABuff_BeltTorch_C** K2Node_DynamicCast_AsBuff_Belt_Torch, bool* K2Node_DynamicCast_bSuccess);
	class UObject* PutTorchOnBelt(bool* CallFunc_CanStartWeaponSwitch_ReturnValue, class UClass** K2Node_ClassDynamicCast_AsShooter_Weapon, class AWeap_Torch_Base_C** K2Node_DynamicCast_AsWeap_Torch_Base, bool* K2Node_DynamicCast_bSuccess, class APrimalBuff** CallFunc_GetBuff_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class ABuff_BeltTorch_C** K2Node_DynamicCast_AsBuff_Belt_Torch, bool* K2Node_DynamicCast_bSuccess_1);
	class UObject* CanTorchBeOnBelt(bool* bCanBeOnBelt, class UClass** K2Node_ClassDynamicCast_AsShooter_Weapon, class AWeap_Torch_Base_C** K2Node_DynamicCast_AsWeap_Torch_Base, bool* K2Node_DynamicCast_bSuccess);
	class UObject* GetBeltTorchBuffInstanceForCharacter(class APrimalBuff** BeltTorchBuff, bool* CallFunc_IsValid_ReturnValue, class UClass** K2Node_ClassDynamicCast_AsShooter_Weapon, class AWeap_Torch_Base_C** K2Node_DynamicCast_AsWeap_Torch_Base, bool* K2Node_DynamicCast_bSuccess, class APrimalBuff** CallFunc_GetBuff_ReturnValue, bool CallFunc_IsValidClass_ReturnValue);
	bool IsCustomContextMenuItemEnabled(class FName ContextItem, bool* CallFunc_CanTorchBeOnBelt_bCanBeOnBelt, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_IsTorchOnBelt_bIsOnBelt, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	bool IsTorchOnBelt(bool* bIsOnBelt, bool* CallFunc_IsValid_ReturnValue, class AActor** CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, class APrimalBuff* CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff, class ABuff_BeltTorch_C** K2Node_DynamicCast_AsBuff_Belt_Torch, bool* K2Node_DynamicCast_bSuccess_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2);
	class FString BPGetCustomInventoryWidgetText(bool CallFunc_IsTorchOnBelt_bIsOnBelt, class FString* CallFunc_SelectString_ReturnValue);
	struct FColor BPGetCustomInventoryWidgetTextColor(bool Temp_bool_Variable, bool CallFunc_IsTorchOnBelt_bIsOnBelt, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue, struct FColor* K2Node_Select_Default);
	float ApplyingSkinOntoItem(class UPrimalItem* ToOwnerItem, bool bIsFirstTime, int32* CallFunc_GetFlameColorIndex_Index, const struct FLinearColor& CallFunc_GetItemCustomColor_outColor, bool CallFunc_GetItemCustomColor_ReturnValue, struct FCustomItemData* CallFunc_GetCustomItemData_OutData, bool* CallFunc_GetCustomItemData_ReturnValue, float* CallFunc_BreakColor_R, float* CallFunc_BreakColor_G, float* CallFunc_BreakColor_B, float* CallFunc_BreakColor_A, float* CallFunc_Array_Get_Item, class UPrimalItemArmor_SaddleGeneric_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_IsValid_ReturnValue, int32 CallFunc_GetItemStatValues_ReturnValue, int32 CallFunc_GetItemStatValues_ReturnValue_1, double CallFunc_Conv_ByteToDouble_ReturnValue);
	void RemovedSkinFromItem(class UPrimalItem* FromOwnerItem, bool bIsFirstTime, class UPrimalItemArmor_SaddleGeneric_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic, bool* K2Node_DynamicCast_bSuccess, struct FCustomItemData* CallFunc_GetCustomItemData_OutData, bool* CallFunc_GetCustomItemData_ReturnValue, float* CallFunc_Array_Get_Item, float* CallFunc_Array_Get_Item_1, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_FFloor_ReturnValue_1, float* CallFunc_Array_Get_Item_2, int32 CallFunc_FFloor_ReturnValue_2, uint8 CallFunc_Conv_IntToByte_ReturnValue, double CallFunc_FFloor_A_ImplicitCast, double CallFunc_FFloor_A_ImplicitCast_1, double CallFunc_FFloor_A_ImplicitCast_2);
	float SkinEquippedBlueprintTick(class UPrimalItem* OwnerItem, float DeltaSeconds, class UPrimalItemArmor_SaddleGeneric_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic, bool* K2Node_DynamicCast_bSuccess, int32* Temp_int_Variable, struct FCustomItemData* CallFunc_GetCustomItemData_OutData, bool* CallFunc_GetCustomItemData_ReturnValue, class UNiagaraComponent* K2Node_DynamicCast_AsNiagara_Particle_System_Component, bool* K2Node_DynamicCast_bSuccess_1, class UParticleSystemComponent** K2Node_DynamicCast_AsCascade_Particle_System_Component, bool* K2Node_DynamicCast_bSuccess_2, class UPointLightComponent** K2Node_DynamicCast_AsPoint_Light_Component, bool* K2Node_DynamicCast_bSuccess_3, float* CallFunc_Array_Get_Item, float* CallFunc_Array_Get_Item_1, float* CallFunc_Array_Get_Item_2, float* CallFunc_Array_Get_Item_3, const struct FLinearColor& K2Node_MakeStruct_LinearColor, int32 CallFunc_Add_IntInt_ReturnValue, struct FVector* CallFunc_Conv_LinearColorToVector_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool* CallFunc_IsValid_ReturnValue, enum class ENetworkModeResult CallFunc_CanRunCosmeticEvents_OutNetworkMode, double* CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_FMax_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
	bool BPPreventUseOntoItem(class UPrimalItem* DestinationItem, bool* bRetValue, int32* CallFunc_And_IntInt_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
	void BPPreUseItem();
	void BPNotifyItemRefreshed();
	class AShooterPlayerController* SelectedCustomContextMenuItem(class FName ContextItem);
	void BPUsedOntoItem(class UPrimalItem* DestinationItem, int32 AdditionalData);
	bool ExecuteUbergraph_PrimalItem_WeaponTorch(bool CallFunc_IsTorchOnBelt_bIsOnBelt, class AActor** CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, class UClass** K2Node_ClassDynamicCast_AsShooter_Weapon, class AShooterWeapon* CallFunc_GetWeapon_ReturnValue, class AWeap_Torch_Base_C** K2Node_DynamicCast_AsWeap_Torch_Base, bool* K2Node_DynamicCast_bSuccess_1, bool* CallFunc_CanTorchBeOnBelt_bCanBeOnBelt, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FName* K2Node_Event_ContextItem, class UPrimalItem** K2Node_Event_DestinationItem, int32* K2Node_Event_AdditionalData, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character_1, bool* K2Node_DynamicCast_bSuccess_2, class UPrimalItemArmor_SaddleGeneric_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic, bool* K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsPreInventoryItem_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_2, bool CallFunc_EqualEqual_NameName_ReturnValue_3);
};

}


