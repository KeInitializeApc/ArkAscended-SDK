#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xEB0 - 0xEB0)
// BlueprintGeneratedClass PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C
class UPrimalItemResource_Gasoline_C : public UPrimalItemResource_Craftable_C
{
public:

	static class UClass* StaticClass();
	static class UPrimalItemResource_Gasoline_C* GetDefaultObj();

	bool CheckForGasolineData(class UPrimalItem* DestinationItem, struct FCustomItemData* CallFunc_GetCustomItemData_OutData, bool* CallFunc_GetCustomItemData_ReturnValue, float* CallFunc_Array_Get_Item, double* CallFunc_Less_DoubleDouble_A_ImplicitCast);
	TArray<float> RefillGasoline(class UPrimalItem* DestinationItem, class UObject** CallFunc_GetDefaultObject_ReturnValue, bool* K2Node_DynamicCast_bSuccess, struct FCustomItemData* CallFunc_GetCustomItemData_OutData, bool* CallFunc_GetCustomItemData_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32* CallFunc_IncrementItemQuantity_ReturnValue);
	void BPUsedOntoItem(class UPrimalItem* DestinationItem, int32 AdditionalData);
	bool BPSupportUseOntoItem(class UPrimalItem* DestinationItem, bool* CallFunc_CheckForGasolineData_SupportsDragOn);
};

}


