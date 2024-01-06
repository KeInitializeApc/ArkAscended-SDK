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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEB0(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	double                                       DurabilityLossPerSecond;                           // 0xEB8(0x8)(Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FLinearColor                          TorchOnBeltWidgetTextColor;                        // 0xEC0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class FString                                TorchOnBeltWidgetText;                             // 0xED0(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItem_WeaponTorch_C* GetDefaultObj();

	bool BPPreventNewColorization(bool* ReturnValue);
	int32 GetFlameColorIndex(class FName CallFunc_MakeLiteralName_ReturnValue);
	bool UpdateBeltTorchMeshColors(bool CallFunc_IsServer_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character);
	bool BPShouldHideTopLevelCustomContextMenuOption(bool* ReturnValue, class AShooterCharacter** CallFunc_GetOwnerPlayer_ReturnValue, class APawn** CallFunc_K2_GetPawn_ReturnValue);
	class AShooterWeapon* BPPreventWeaponEquip(bool* ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool CallFunc_IsServer_ReturnValue);
	bool RemoveTorchFromBelt(class AShooterCharacter* ForCharacter);
	bool PutTorchOnBelt(class AShooterCharacter* ForCharacter, bool CallFunc_IsServer_ReturnValue, class UClass** CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UClass** K2Node_ClassDynamicCast_AsShooter_Weapon, class APrimalBuff** CallFunc_GetBuff_ReturnValue);
	bool CanTorchBeOnBelt(bool* bCanBeOnBelt, class UClass** CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UClass** K2Node_ClassDynamicCast_AsShooter_Weapon);
	bool GetBeltTorchBuffInstanceForCharacter(class APrimalBuff** BeltTorchBuff, class UClass** CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UClass** K2Node_ClassDynamicCast_AsShooter_Weapon, class APrimalBuff** CallFunc_GetBuff_ReturnValue);
	bool IsCustomContextMenuItemEnabled(bool* ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_1);
	bool IsTorchOnBelt(bool* bIsOnBelt, int32 CallFunc_BPGetItemID_ItemID2, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* CallFunc_BooleanAND_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_1, bool* CallFunc_BooleanAND_ReturnValue_2);
	class FString BPGetCustomInventoryWidgetText(class FString* ReturnValue);
	struct FColor BPGetCustomInventoryWidgetTextColor(struct FColor* ReturnValue);
	struct FCustomItemData ApplyingSkinOntoItem(int32* CallFunc_GetFlameColorIndex_Index, float* CallFunc_BreakColor_G, float* CallFunc_BreakColor_B, float* CallFunc_BreakColor_A, TArray<float>* K2Node_MakeArray_Array, TArray<class FName>* K2Node_MakeArray_Array_1, TArray<class UClass*>* K2Node_MakeArray_Array_2, TArray<class UObject*>* K2Node_MakeArray_Array_3, TArray<class FString>* K2Node_MakeArray_Array_4, double* CallFunc_Conv_IntToDouble_ReturnValue, double* CallFunc_Conv_IntToDouble_ReturnValue_1, float CallFunc_GetItemStatModifier_ReturnValue, TArray<float>* K2Node_MakeArray_Array_5, float* K2Node_MakeArray__3__ImplicitCast, float* K2Node_MakeArray__2__ImplicitCast, float* K2Node_MakeArray__1__ImplicitCast);
	double RemovedSkinFromItem();
	float SkinEquippedBlueprintTick(class UActorComponent* CallFunc_GetAttachedComponent_ReturnValue, bool K2Node_SwitchName_CmpSuccess, const struct FLinearColor& K2Node_MakeStruct_LinearColor, int32* CallFunc_Add_IntInt_ReturnValue, struct FVector* CallFunc_Conv_LinearColorToVector_ReturnValue, int32 CallFunc_GetAttachedComponentsNum_ReturnValue, int32* CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, enum class ENetworkModeResult* CallFunc_CanRunCosmeticEvents_OutNetworkMode, bool* K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsServer_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
	bool BPPreventUseOntoItem(bool* ReturnValue, bool* bRetValue, int32* CallFunc_And_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
	void BPPreUseItem();
	void BPNotifyItemRefreshed();
	class FName SelectedCustomContextMenuItem(class AShooterPlayerController* ForPC);
	int32 BPUsedOntoItem();
	bool ExecuteUbergraph_PrimalItem_WeaponTorch(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, class UClass** CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, class UClass** K2Node_ClassDynamicCast_AsShooter_Weapon, bool* CallFunc_BooleanAND_ReturnValue, class APawn** CallFunc_K2_GetPawn_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character_1, bool* CallFunc_BooleanOR_ReturnValue);
};

}


