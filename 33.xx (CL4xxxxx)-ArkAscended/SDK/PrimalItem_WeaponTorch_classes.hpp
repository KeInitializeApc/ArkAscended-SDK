#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xF10 - 0xEE0)
// BlueprintGeneratedClass PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C
class UPrimalItem_WeaponTorch_C : public UPrimalItemWeaponGenericAmmoless_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEE0(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       DurabilityLossPerSecond;                           // 0xEE8(0x8)(ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FLinearColor                          TorchOnBeltWidgetTextColor;                        // 0xEF0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                TorchOnBeltWidgetText;                             // 0xF00(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItem_WeaponTorch_C* GetDefaultObj();

	bool BPPreventNewColorization();
	int32 GetFlameColorIndex();
	class ABuff_BeltTorch_C* UpdateBeltTorchMeshColors(class AActor* CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, bool* K2Node_DynamicCast_bSuccess_1);
	bool BPShouldHideTopLevelCustomContextMenuOption(class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue);
	bool BPPreventWeaponEquip(class AActor* CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess);
	class ABuff_BeltTorch_C* RemoveTorchFromBelt(class AShooterCharacter** ForCharacter, bool* K2Node_DynamicCast_bSuccess);
	class ABuff_BeltTorch_C* PutTorchOnBelt(class AShooterCharacter** ForCharacter, class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UObject** CallFunc_GetClassDefaultObject_ReturnValue, bool* K2Node_DynamicCast_bSuccess, bool* K2Node_DynamicCast_bSuccess_1);
	class AWeap_Torch_Base_C* CanTorchBeOnBelt(class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UObject** CallFunc_GetClassDefaultObject_ReturnValue, bool* K2Node_DynamicCast_bSuccess);
	bool GetBeltTorchBuffInstanceForCharacter(class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UObject** CallFunc_GetClassDefaultObject_ReturnValue, bool* K2Node_DynamicCast_bSuccess);
	bool IsCustomContextMenuItemEnabled();
	bool IsTorchOnBelt(int32* CallFunc_BPGetItemID_ItemID2, class AActor* CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, bool* K2Node_DynamicCast_bSuccess_1, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1, bool* CallFunc_EqualEqual_IntInt_ReturnValue_2, bool* CallFunc_EqualEqual_IntInt_ReturnValue_3);
	class FString BPGetCustomInventoryWidgetText();
	struct FColor BPGetCustomInventoryWidgetTextColor(bool Temp_bool_Variable, const struct FColor& K2Node_Select_Default);
	float ApplyingSkinOntoItem(const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, float CallFunc_Array_Get_Item, TArray<float>* K2Node_MakeArray_Array, bool* K2Node_DynamicCast_bSuccess, TArray<class FName>* K2Node_MakeArray_Array_1, TArray<class UClass*>* K2Node_MakeArray_Array_2, TArray<class UObject*>* K2Node_MakeArray_Array_3, TArray<class FString>* K2Node_MakeArray_Array_4, struct FCustomItemData* K2Node_MakeStruct_CustomItemData, TArray<float>* K2Node_MakeArray_Array_5, struct FCustomItemData* K2Node_MakeStruct_CustomItemData_1, float K2Node_MakeArray__3__ImplicitCast, float K2Node_MakeArray__2__ImplicitCast, float K2Node_MakeArray__1__ImplicitCast);
	double RemovedSkinFromItem(bool* K2Node_DynamicCast_bSuccess, const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, float CallFunc_Array_Get_Item, float CallFunc_Array_Get_Item_1, float CallFunc_Array_Get_Item_2);
	float SkinEquippedBlueprintTick(float* DeltaSeconds, bool* K2Node_DynamicCast_bSuccess, int32* Temp_int_Variable, const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, class UNiagaraComponent* K2Node_DynamicCast_AsNiagara_Particle_System_Component, bool* K2Node_DynamicCast_bSuccess_1, bool* K2Node_DynamicCast_bSuccess_2, bool* K2Node_DynamicCast_bSuccess_3, float CallFunc_Array_Get_Item, float CallFunc_Array_Get_Item_1, float CallFunc_Array_Get_Item_2, float CallFunc_Array_Get_Item_3, struct FLinearColor* K2Node_MakeStruct_LinearColor, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_Multiply_DoubleDouble_ReturnValue, double* CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
	bool BPPreventUseOntoItem(double* CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
	void BPPreUseItem();
	void BPNotifyItemRefreshed();
	class FName SelectedCustomContextMenuItem(class AShooterPlayerController** ForPC);
	int32 BPUsedOntoItem();
	bool ExecuteUbergraph_PrimalItem_WeaponTorch(int32* EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, class UObject** CallFunc_GetClassDefaultObject_ReturnValue, bool* K2Node_DynamicCast_bSuccess_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character_1, bool* K2Node_DynamicCast_bSuccess_2, bool* K2Node_DynamicCast_bSuccess_3);
};

}


