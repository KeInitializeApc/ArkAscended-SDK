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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEB0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	double                                       DurabilityLossPerSecond;                           // 0xEB8(0x8)(ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	struct FLinearColor                          TorchOnBeltWidgetTextColor;                        // 0xEC0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class FString                                TorchOnBeltWidgetText;                             // 0xED0(0x10)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItem_WeaponTorch_C* GetDefaultObj();

	void BPPreventNewColorization(bool ReturnValue, bool CallFunc_IsTorchOnBelt_bIsOnBelt);
	bool GetFlameColorIndex(class FName CallFunc_MakeLiteralName_ReturnValue, int32 CallFunc_SelectInt_ReturnValue);
	bool UpdateBeltTorchMeshColors(bool CallFunc_IsTorchOnBelt_bIsOnBelt);
	bool BPShouldHideTopLevelCustomContextMenuOption(bool ReturnValue, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool* CallFunc_EqualEqual_ObjectObject_ReturnValue);
	bool BPPreventWeaponEquip(bool ReturnValue, bool CallFunc_IsTorchOnBelt_bIsOnBelt, bool CallFunc_BooleanAND_ReturnValue, class AShooterWeapon* CallFunc_GetWeapon_ReturnValue);
	bool RemoveTorchFromBelt(class AShooterCharacter* ForCharacter);
	bool PutTorchOnBelt(class AShooterCharacter* ForCharacter, class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UObject* CallFunc_GetClassDefaultObject_ReturnValue, class AWeap_Torch_Base_C** K2Node_DynamicCast_AsWeap_Torch_Base, class APrimalBuff** CallFunc_GetBuff_ReturnValue);
	bool CanTorchBeOnBelt(class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UObject* CallFunc_GetClassDefaultObject_ReturnValue, class AWeap_Torch_Base_C** K2Node_DynamicCast_AsWeap_Torch_Base);
	bool GetBeltTorchBuffInstanceForCharacter(class APrimalBuff* BeltTorchBuff, class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UObject* CallFunc_GetClassDefaultObject_ReturnValue, class AWeap_Torch_Base_C** K2Node_DynamicCast_AsWeap_Torch_Base, class APrimalBuff** CallFunc_GetBuff_ReturnValue);
	bool IsCustomContextMenuItemEnabled(bool ReturnValue, bool CallFunc_IsTorchOnBelt_bIsOnBelt, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	bool IsTorchOnBelt(int32* CallFunc_BPGetItemID_ItemID2, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2);
	void BPGetCustomInventoryWidgetText(const class FString& ReturnValue, bool CallFunc_IsTorchOnBelt_bIsOnBelt, const class FString& CallFunc_SelectString_ReturnValue);
	struct FColor BPGetCustomInventoryWidgetTextColor(const struct FColor& ReturnValue, const struct FLinearColor& NewLocalVar, bool Temp_bool_Variable, const struct FColor& Temp_struct_Variable, bool CallFunc_IsTorchOnBelt_bIsOnBelt, const struct FColor& K2Node_Select_Default);
	float ApplyingSkinOntoItem(class UPrimalItem** ToOwnerItem, bool* bIsFirstTime, int32* CallFunc_GetFlameColorIndex_Index, struct FLinearColor* CallFunc_GetItemCustomColor_outColor, bool* CallFunc_GetItemCustomColor_ReturnValue, float CallFunc_Array_Get_Item, const TArray<float>& K2Node_MakeArray_Array, class UPrimalItemArmor_SaddleGeneric_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic, const TArray<class FName>& K2Node_MakeArray_Array_1, const TArray<class UClass*>& K2Node_MakeArray_Array_2, const TArray<class UObject*>& K2Node_MakeArray_Array_3, const TArray<class FString>& K2Node_MakeArray_Array_4, int32 CallFunc_GetItemStatValues_ReturnValue, const struct FCustomItemData& K2Node_MakeStruct_CustomItemData, int32 CallFunc_GetItemStatValues_ReturnValue_1, const TArray<float>& K2Node_MakeArray_Array_5, const struct FCustomItemData& K2Node_MakeStruct_CustomItemData_1, float K2Node_MakeArray__3__ImplicitCast, float K2Node_MakeArray__2__ImplicitCast, float K2Node_MakeArray__1__ImplicitCast);
	double RemovedSkinFromItem(bool* bIsFirstTime, class UPrimalItemArmor_SaddleGeneric_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic, float CallFunc_Array_Get_Item, float CallFunc_Array_Get_Item_1, float CallFunc_Array_Get_Item_2);
	double SkinEquippedBlueprintTick(class UPrimalItemArmor_SaddleGeneric_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic, class UNiagaraComponent** K2Node_DynamicCast_AsNiagara_Particle_System_Component, class UParticleSystemComponent** K2Node_DynamicCast_AsCascade_Particle_System_Component, class UPointLightComponent** K2Node_DynamicCast_AsPoint_Light_Component, bool K2Node_SwitchName_CmpSuccess, float CallFunc_Array_Get_Item, float CallFunc_Array_Get_Item_1, float CallFunc_Array_Get_Item_2, float CallFunc_Array_Get_Item_3, struct FVector* CallFunc_Conv_LinearColorToVector_ReturnValue, int32* CallFunc_Subtract_IntInt_ReturnValue, bool* K2Node_SwitchEnum_CmpSuccess, double* CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double* CallFunc_Subtract_DoubleDouble_ReturnValue_1, double* CallFunc_Subtract_DoubleDouble_A_ImplicitCast, float K2Node_VariableSet_ItemDurability_ImplicitCast);
	double BPPreventUseOntoItem(bool ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void BPPreUseItem();
	void BPNotifyItemRefreshed();
	class FName SelectedCustomContextMenuItem(class AShooterPlayerController** ForPC);
	int32 BPUsedOntoItem();
	bool ExecuteUbergraph_PrimalItem_WeaponTorch(int32 EntryPoint, bool CallFunc_IsTorchOnBelt_bIsOnBelt, class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class AShooterWeapon* CallFunc_GetWeapon_ReturnValue, class UObject* CallFunc_GetClassDefaultObject_ReturnValue, class AWeap_Torch_Base_C** K2Node_DynamicCast_AsWeap_Torch_Base, bool CallFunc_BooleanAND_ReturnValue, class FName K2Node_Event_ContextItem, class AShooterPlayerController* K2Node_Event_ForPC, class UPrimalItem* K2Node_Event_DestinationItem, int32 K2Node_Event_AdditionalData, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UPrimalItemArmor_SaddleGeneric_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic, bool CallFunc_IsPreInventoryItem_ReturnValue, bool* CallFunc_BooleanOR_ReturnValue);
};

}


