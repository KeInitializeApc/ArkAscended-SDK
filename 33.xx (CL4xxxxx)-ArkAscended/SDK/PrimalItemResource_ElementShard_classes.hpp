#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xEB0 - 0xEB0)
// BlueprintGeneratedClass PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C
class UPrimalItemResource_ElementShard_C : public UPrimalItemResourceGeneric_C
{
public:

	static class UClass* StaticClass();
	static class UPrimalItemResource_ElementShard_C* GetDefaultObj();

	TArray<float> RefillElementShard(class UPrimalItem* DestinationItem, TArray<double>* CustomFloats, class UObject** CallFunc_GetDefaultObject_ReturnValue, struct FCustomItemData* CallFunc_GetCustomItemData_OutData, bool* CallFunc_GetCustomItemData_ReturnValue, bool* K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TArray<double>* K2Node_VariableSet_CustomFloats_ImplicitCast);
	bool CheckForElementShardData(class UPrimalItem* DestinationItem, bool* SupportsDragOnto, bool* ReturnVal, struct FCustomItemData* CallFunc_GetCustomItemData_OutData, bool* CallFunc_GetCustomItemData_ReturnValue, float* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double* CallFunc_Less_DoubleDouble_A_ImplicitCast);
	bool BPSupportUseOntoItem(class UPrimalItem* DestinationItem, bool* CallFunc_CheckForElementShardData_SupportsDragOnto);
	void BPUsedOntoItem(class UPrimalItem* DestinationItem, int32 AdditionalData);
};

}


