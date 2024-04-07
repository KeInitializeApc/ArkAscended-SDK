#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xEE0 - 0xEE0)
// BlueprintGeneratedClass PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C
class UPrimalItemResource_ElementShard_C : public UPrimalItemResourceGeneric_C
{
public:

	static class UClass* StaticClass();
	static class UPrimalItemResource_ElementShard_C* GetDefaultObj();

	bool RefillElementShard(class UObject* CallFunc_GetDefaultObject_ReturnValue, const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, class UPrimalItem** K2Node_DynamicCast_AsPrimal_Item, bool* K2Node_DynamicCast_bSuccess, struct FCustomItemData* K2Node_MakeStruct_CustomItemData, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool* CallFunc_Array_IsValidIndex_ReturnValue, double CallFunc_MakeLiteralDouble_ReturnValue, TArray<float>* K2Node_MakeStruct_CustomDataFloats_ImplicitCast, TArray<double>* K2Node_VariableSet_CustomFloats_ImplicitCast);
	bool CheckForElementShardData(bool* SupportsDragOnto, bool* ReturnVal, const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, float CallFunc_Array_Get_Item, bool* CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast);
	bool BPSupportUseOntoItem(bool* CallFunc_CheckForElementShardData_SupportsDragOnto);
	int32 BPUsedOntoItem();
};

}


