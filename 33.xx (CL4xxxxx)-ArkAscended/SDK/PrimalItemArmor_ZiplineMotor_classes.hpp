#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xEF0 - 0xEE0)
// BlueprintGeneratedClass PrimalItemArmor_ZiplineMotor.PrimalItemArmor_ZiplineMotor_C
class UPrimalItemArmor_ZiplineMotor_C : public UPrimalItemSkinGeneric_C
{
public:
	double                                       MaxGasoline;                                       // 0xEE0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UPrimalItem*                           ParentItem;                                        // 0xEE8(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItemArmor_ZiplineMotor_C* GetDefaultObj();

	double GetGasolineValueFromItem(double* Value, const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, float CallFunc_Array_Get_Item);
	class FString BPGetCustomInventoryWidgetText(class FText* CallFunc_Conv_DoubleToText_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	class FString BPGetSkinnedCustomInventoryWidgetText(class FText* CallFunc_Conv_DoubleToText_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	class FString SetGasolineDescription(double* Value, class FText CallFunc_MakeLiteralText_ReturnValue, class FText* CallFunc_Conv_DoubleToText_ReturnValue, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_1, class UObject* CallFunc_GetDefaultObject_ReturnValue, class UPrimalItem** K2Node_DynamicCast_AsPrimal_Item, bool* K2Node_DynamicCast_bSuccess, class FText* CallFunc_Conv_DoubleToText_ReturnValue_1, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_2, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array);
	bool BPInitFromItemNetInfo(class AActor* CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess);
	double RemovedSkinFromItem(const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, float CallFunc_Array_Get_Item);
	class USkeletalMeshComponent* SkinEquippedBlueprintTick(float* DeltaSeconds, class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UClass** K2Node_ClassDynamicCast_AsPrimal_Buff, class AActor* CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, bool* K2Node_DynamicCast_bSuccess_1, class UMaterialInterface** CallFunc_GetMaterial_ReturnValue, bool* K2Node_DynamicCast_bSuccess_2, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool* K2Node_DynamicCast_bSuccess_3, class UMaterialInterface** CallFunc_GetMaterial_ReturnValue_1, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic_1, bool* K2Node_DynamicCast_bSuccess_4);
	double ApplyingSkinOntoItem(const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, float CallFunc_Array_Get_Item);
};

}


