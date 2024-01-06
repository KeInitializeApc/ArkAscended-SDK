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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEB0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	double                                       DurabilityLossPerSecond;                           // 0xEB8(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FLinearColor                          TorchOnBeltWidgetTextColor;                        // 0xEC0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class FString                                TorchOnBeltWidgetText;                             // 0xED0(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItem_WeaponTorch_C* GetDefaultObj();

	bool BPPreventNewColorization(bool* ReturnValue);
	int32 GetFlameColorIndex(bool* CallFunc_EqualEqual_NameName_ReturnValue);
	bool UpdateBeltTorchMeshColors(bool CallFunc_IsServer_ReturnValue, class AActor** CallFunc_GetOwner_ReturnValue, class AShooterCharacter** K2Node_DynamicCast_AsShooter_Character, class ABuff_BeltTorch_C* K2Node_DynamicCast_AsBuff_Belt_Torch);
	bool BPShouldHideTopLevelCustomContextMenuOption(bool* ReturnValue, bool* CallFunc_EqualEqual_NameName_ReturnValue, bool* CallFunc_EqualEqual_NameName_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue);
	class AShooterWeapon* BPPreventWeaponEquip(bool* ReturnValue, bool* CallFunc_CanTorchBeOnBelt_bCanBeOnBelt, class AActor** CallFunc_GetOwner_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, class AShooterCharacter** K2Node_DynamicCast_AsShooter_Character, bool CallFunc_IsServer_ReturnValue);
	bool RemoveTorchFromBelt(class AShooterCharacter* ForCharacter, class ABuff_BeltTorch_C* K2Node_DynamicCast_AsBuff_Belt_Torch);
	bool PutTorchOnBelt(class AShooterCharacter* ForCharacter, bool CallFunc_IsServer_ReturnValue, bool* CallFunc_CanStartWeaponSwitch_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsShooter_Weapon, bool* K2Node_ClassDynamicCast_bSuccess, class APrimalBuff** CallFunc_GetBuff_ReturnValue, class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue, bool* CallFunc_IsValidClass_ReturnValue, class ABuff_BeltTorch_C* K2Node_DynamicCast_AsBuff_Belt_Torch);
	bool CanTorchBeOnBelt(bool* bCanBeOnBelt, class UClass* K2Node_ClassDynamicCast_AsShooter_Weapon, bool* K2Node_ClassDynamicCast_bSuccess);
	bool GetBeltTorchBuffInstanceForCharacter(class APrimalBuff** BeltTorchBuff, class UClass* K2Node_ClassDynamicCast_AsShooter_Weapon, bool* K2Node_ClassDynamicCast_bSuccess, class APrimalBuff** CallFunc_GetBuff_ReturnValue, bool* CallFunc_IsValidClass_ReturnValue);
	bool IsCustomContextMenuItemEnabled(bool* ReturnValue, bool* CallFunc_CanTorchBeOnBelt_bCanBeOnBelt, bool* CallFunc_EqualEqual_NameName_ReturnValue, bool* CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_1);
	bool IsTorchOnBelt(bool* bIsOnBelt, int32* CallFunc_BPGetItemID_ItemID1, class AActor** CallFunc_GetOwner_ReturnValue, class AShooterCharacter** K2Node_DynamicCast_AsShooter_Character, class ABuff_BeltTorch_C* K2Node_DynamicCast_AsBuff_Belt_Torch, bool* CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_1, bool* CallFunc_BooleanAND_ReturnValue_2);
	class FString BPGetCustomInventoryWidgetText(class FString* ReturnValue);
	bool BPGetCustomInventoryWidgetTextColor(struct FColor* ReturnValue, bool* Temp_bool_Variable, struct FColor* CallFunc_Conv_LinearColorToColor_ReturnValue, struct FColor* K2Node_Select_Default);
	struct FCustomItemData ApplyingSkinOntoItem(float* CallFunc_BreakColor_R, float* CallFunc_BreakColor_G, float* CallFunc_BreakColor_B, float* CallFunc_BreakColor_A, TArray<float>* K2Node_MakeArray_Array, TArray<class FName>* K2Node_MakeArray_Array_1, TArray<class UClass*>* K2Node_MakeArray_Array_2, TArray<class UObject*>* K2Node_MakeArray_Array_3, TArray<class FString>* K2Node_MakeArray_Array_4, double* CallFunc_Conv_IntToDouble_ReturnValue, double* CallFunc_Conv_IntToDouble_ReturnValue_1, double* CallFunc_Conv_ByteToDouble_ReturnValue, float* CallFunc_GetItemStatModifier_ReturnValue, TArray<float>* K2Node_MakeArray_Array_5, float* K2Node_MakeArray__3__ImplicitCast, float* K2Node_MakeArray__2__ImplicitCast, float* K2Node_MakeArray__1__ImplicitCast);
	double RemovedSkinFromItem(uint8* CallFunc_Conv_IntToByte_ReturnValue);
	float SkinEquippedBlueprintTick(class UNiagaraComponent** K2Node_DynamicCast_AsNiagara_Particle_System_Component, bool* K2Node_SwitchName_CmpSuccess, int32* CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, enum class ENetworkModeResult CallFunc_CanRunCosmeticEvents_OutNetworkMode, bool CallFunc_IsServer_ReturnValue, double* CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
	bool BPPreventUseOntoItem(bool* ReturnValue, bool* bRetValue, int32* CallFunc_And_IntInt_ReturnValue, bool* CallFunc_NotEqual_IntInt_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
	void BPPreUseItem();
	void BPNotifyItemRefreshed();
	class FName SelectedCustomContextMenuItem(class AShooterPlayerController* ForPC);
	int32 BPUsedOntoItem();
	bool ExecuteUbergraph_PrimalItem_WeaponTorch(int32* EntryPoint, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, class AActor** CallFunc_GetOwner_ReturnValue, class AShooterCharacter** K2Node_DynamicCast_AsShooter_Character, class UClass* K2Node_ClassDynamicCast_AsShooter_Weapon, bool* K2Node_ClassDynamicCast_bSuccess, bool* CallFunc_CanTorchBeOnBelt_bCanBeOnBelt, bool* CallFunc_IsValidClass_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AShooterCharacter** K2Node_DynamicCast_AsShooter_Character_1, bool* CallFunc_EqualEqual_NameName_ReturnValue, bool* CallFunc_EqualEqual_NameName_ReturnValue_1, bool* CallFunc_EqualEqual_NameName_ReturnValue_2, bool* CallFunc_EqualEqual_NameName_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue);
};

}


