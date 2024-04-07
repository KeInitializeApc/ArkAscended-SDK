#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xEE0 - 0xEE0)
// BlueprintGeneratedClass PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C
class UPrimalItemResource_Gasoline_C : public UPrimalItemResource_Craftable_C
{
public:

	static class UClass* StaticClass();
	static class UPrimalItemResource_Gasoline_C* GetDefaultObj();

	class UPrimalItem* CheckForGasolineData(bool* SupportsDragOn, bool* ReturnValue_Loc, const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, float CallFunc_Array_Get_Item, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast);
	class UPrimalItem* RefillGasoline(TArray<double>* CustomFloats_Loc, double CallFunc_MakeLiteralDouble_ReturnValue, class UObject* CallFunc_GetDefaultObject_ReturnValue, class UPrimalItem** K2Node_DynamicCast_AsPrimal_Item, bool* K2Node_DynamicCast_bSuccess, const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_IncrementItemQuantity_ReturnValue, struct FCustomItemData* K2Node_MakeStruct_CustomItemData, TArray<double>* K2Node_VariableSet_CustomFloats_Loc_ImplicitCast, TArray<float>* K2Node_MakeStruct_CustomDataFloats_ImplicitCast);
	int32 BPUsedOntoItem();
	bool BPSupportUseOntoItem(bool CallFunc_CheckForGasolineData_SupportsDragOn);
};

}


