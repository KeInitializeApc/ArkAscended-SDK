#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xF00 - 0xED0)
// BlueprintGeneratedClass PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C
class UPrimalItem_WeaponTorch_C : public UPrimalItemWeaponGenericAmmoless_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xED0(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       DurabilityLossPerSecond;                           // 0xED8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	struct FLinearColor                          TorchOnBeltWidgetTextColor;                        // 0xEE0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	class FString                                TorchOnBeltWidgetText;                             // 0xEF0(0x10)(Edit, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItem_WeaponTorch_C* GetDefaultObj();

	void BPPreventNewColorization(bool ReturnValue, bool* CallFunc_IsTorchOnBelt_bIsOnBelt);
	class FName GetFlameColorIndex(int32* Index, bool* CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, int32* CallFunc_SelectInt_ReturnValue);
	bool UpdateBeltTorchMeshColors(bool* CallFunc_IsTorchOnBelt_bIsOnBelt, class APrimalBuff* CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff, class ABuff_BeltTorch_C** K2Node_DynamicCast_AsBuff_Belt_Torch);
	bool BPShouldHideTopLevelCustomContextMenuOption(class FName* ContextItem, bool ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class APawn** CallFunc_K2_GetPawn_ReturnValue);
	bool BPPreventWeaponEquip(bool ReturnValue, bool CallFunc_CanTorchBeOnBelt_bCanBeOnBelt, bool* CallFunc_IsTorchOnBelt_bIsOnBelt, class AShooterWeapon* CallFunc_GetWeapon_ReturnValue);
	bool RemoveTorchFromBelt(class APrimalBuff* CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff, class ABuff_BeltTorch_C** K2Node_DynamicCast_AsBuff_Belt_Torch);
	bool PutTorchOnBelt(bool CallFunc_CanStartWeaponSwitch_ReturnValue, bool K2Node_ClassDynamicCast_bSuccess, class AWeap_Torch_Base_C** K2Node_DynamicCast_AsWeap_Torch_Base, class APrimalBuff* CallFunc_GetBuff_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue, class ABuff_BeltTorch_C** K2Node_DynamicCast_AsBuff_Belt_Torch);
	bool CanTorchBeOnBelt(bool* bCanBeOnBelt, bool K2Node_ClassDynamicCast_bSuccess, class AWeap_Torch_Base_C** K2Node_DynamicCast_AsWeap_Torch_Base);
	bool GetBeltTorchBuffInstanceForCharacter(bool* CallFunc_IsValid_ReturnValue, bool K2Node_ClassDynamicCast_bSuccess, class AWeap_Torch_Base_C** K2Node_DynamicCast_AsWeap_Torch_Base, class APrimalBuff* CallFunc_GetBuff_ReturnValue);
	bool IsCustomContextMenuItemEnabled(class FName* ContextItem, bool ReturnValue, bool CallFunc_CanTorchBeOnBelt_bCanBeOnBelt, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool* CallFunc_IsTorchOnBelt_bIsOnBelt);
	bool IsTorchOnBelt(bool* bIsOnBelt, int32 CallFunc_BPGetItemID_ItemID1, int32* CallFunc_BPGetItemID_ItemID2, bool* CallFunc_IsValid_ReturnValue, class APrimalBuff* CallFunc_GetBeltTorchBuffInstanceForCharacter_BeltTorchBuff, class ABuff_BeltTorch_C** K2Node_DynamicCast_AsBuff_Belt_Torch, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1, bool* CallFunc_EqualEqual_IntInt_ReturnValue_2, bool* CallFunc_EqualEqual_IntInt_ReturnValue_3);
	void BPGetCustomInventoryWidgetText(const class FString& ReturnValue, bool* CallFunc_IsTorchOnBelt_bIsOnBelt, class FString* CallFunc_SelectString_ReturnValue);
	struct FColor BPGetCustomInventoryWidgetTextColor(const struct FColor& ReturnValue, bool* Temp_bool_Variable, bool* CallFunc_IsTorchOnBelt_bIsOnBelt, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue, struct FColor* K2Node_Select_Default);
	float ApplyingSkinOntoItem(class UPrimalItem* ToOwnerItem, bool bIsFirstTime, const struct FLinearColor& CallFunc_GetItemCustomColor_outColor, float* CallFunc_BreakColor_R, float* CallFunc_BreakColor_G, float* CallFunc_BreakColor_B, float* CallFunc_BreakColor_A, class UPrimalItemArmor_SaddleGeneric_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic, bool* CallFunc_IsValid_ReturnValue, int32 CallFunc_GetItemStatValues_ReturnValue, int32 CallFunc_GetItemStatValues_ReturnValue_1, double CallFunc_Conv_ByteToDouble_ReturnValue, float CallFunc_GetItemStatModifier_ReturnValue);
	float RemovedSkinFromItem(bool bIsFirstTime, class UPrimalItemArmor_SaddleGeneric_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_FFloor_ReturnValue_1, int32 CallFunc_FFloor_ReturnValue_2, uint8 CallFunc_Conv_IntToByte_ReturnValue, double CallFunc_FFloor_A_ImplicitCast, double CallFunc_FFloor_A_ImplicitCast_1, double CallFunc_FFloor_A_ImplicitCast_2);
	float SkinEquippedBlueprintTick(class UPrimalItemArmor_SaddleGeneric_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic, class UParticleSystemComponent** K2Node_DynamicCast_AsCascade_Particle_System_Component, class UPointLightComponent** K2Node_DynamicCast_AsPoint_Light_Component, bool K2Node_SwitchName_CmpSuccess, bool* CallFunc_IsValid_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_FMax_ReturnValue);
	double BPPreventUseOntoItem(class UPrimalItem* DestinationItem, bool ReturnValue, bool* bRetValue, int32* CallFunc_And_IntInt_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void BPPreUseItem();
	void BPNotifyItemRefreshed();
	class AShooterPlayerController* SelectedCustomContextMenuItem(class FName* ContextItem);
	void BPUsedOntoItem(class UPrimalItem* DestinationItem, int32* AdditionalData);
	bool ExecuteUbergraph_PrimalItem_WeaponTorch(bool* CallFunc_IsTorchOnBelt_bIsOnBelt, bool K2Node_ClassDynamicCast_bSuccess, class AShooterWeapon* CallFunc_GetWeapon_ReturnValue, class AWeap_Torch_Base_C** K2Node_DynamicCast_AsWeap_Torch_Base, bool CallFunc_CanTorchBeOnBelt_bCanBeOnBelt, int32* K2Node_Event_AdditionalData, class APawn** CallFunc_K2_GetPawn_ReturnValue, class UPrimalItemArmor_SaddleGeneric_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic, bool* CallFunc_IsPreInventoryItem_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_2, bool CallFunc_EqualEqual_NameName_ReturnValue_3);
};

}


